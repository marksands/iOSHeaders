//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, WBSFluidProgressState;

@protocol WBSFluidProgressStateSource <NSObject>
- (_Bool)hasFailedURL;
- (double)estimatedProgress;
- (NSURL *)expectedOrCurrentURL;
- (WBSFluidProgressState *)progressState;
- (void)clearFluidProgressState;
- (_Bool)createFluidProgressState;
@end

