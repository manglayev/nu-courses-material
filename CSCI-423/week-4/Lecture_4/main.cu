#include <stdio.h>

int main()
{
  /*
   * Device ID is required first to query the device.
   */

  int deviceId;
  cudaGetDevice(&deviceId);

  cudaDeviceProp props;
  cudaGetDeviceProperties(&props, deviceId);

  /*
   * `props` now contains several properties about the current device.
   */

  int computeCapabilityMajor = props.major;
  int computeCapabilityMinor = props.minor;
  int multiProcessorCount = props.multiProcessorCount;
  int warpSize = props.warpSize;

    /*
    int mgs[] = {props.maxGridSize[3]};
    for(int a = 0; a < 3; a++)
    {
        printf("value %d = %d;\n",a, mgs[a]);
    }
    */

    int mtd[] = {props.maxThreadsDim[3]};
    for(int a = 0; a < 3; a++)
    {
        printf("value %d = %d;\n",a, mtd[a]);
    }

    int  mtpb = props.maxThreadsPerBlock;
    printf("max threads per block = %d;\n",mtpb);
    //16
    int mbpmp = props.maxBlocksPerMultiProcessor;
    printf("max blocks per sm = %d;\n",mbpmp);
    //16

    int mtpmp = props.maxThreadsPerMultiProcessor;
    printf("max threads per sm = %d;\n",mtpmp);

  printf("\nDevice ID: %d\nNumber of SMs: %d\nCompute Capability Major: %d\nCompute Capability Minor: %d\nWarp Size: %d\n", deviceId, multiProcessorCount, computeCapabilityMajor, computeCapabilityMinor, warpSize);
}