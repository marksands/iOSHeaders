//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel
{
}

+ (id)kernelWithString:(id)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 inputImage:(id)arg3 arguments:(id)arg4;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (void)setCanReduceOutputChannels:(_Bool)arg1;
- (_Bool)canReduceOutputChannels;
@property(nonatomic) _Bool preservesRange;
@property(nonatomic) _Bool perservesAlpha;
- (id)_initWithDict:(id)arg1;
-     // Error parsing type: {CGRect={CGPoint=dd}{CGSize=dd}}72@0:8^{WarpKernel=^^?{atomic<unsigned int>=AI}**B^{SerialIntArray}^{SerialStringArray}^{__CFString}BBBBBi}16^{SerialObjectPtrArray=iii^^v}24@32{CGRect={CGPoint=dd}{CGSize=dd}}40, name: autogenerateROI:args:arguments:extent:
- (id)makeGridImage:(struct CGRect)arg1 nx:(int)arg2 ny:(int)arg3;
-     // Error parsing type: @32@0:8^{WarpKernel=^^?{atomic<unsigned int>=AI}**B^{SerialIntArray}^{SerialStringArray}^{__CFString}BBBBBi}16^{SerialObjectPtrArray=iii^^v}24, name: generateGeneralKernelFromWarpKernel:args:
-     // Error parsing type: @32@0:8^{WarpKernel=^^?{atomic<unsigned int>=AI}**B^{SerialIntArray}^{SerialStringArray}^{__CFString}BBBBBi}16^{SerialObjectPtrArray=iii^^v}24, name: generateMainFromWarpKernel:args:

@end

