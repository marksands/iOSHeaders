//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class CIImage, CIRenderDestination, CIRenderTask;

@protocol NURenderer <NSObject>
- (CIRenderTask *)renderImage:(CIImage *)arg1 toDestination:(CIRenderDestination *)arg2 bounds:(CDStruct_996ac03c)arg3 error:(out id *)arg4;
@end

