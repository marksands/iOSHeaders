//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AECameraAssetPackageGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *__generationQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue; // @synthesize _generationQueue=__generationQueue;
- (void).cxx_destruct;
- (void)generatePackageFromReviewAsset:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_populatePackage:(id)arg1 fromReviewAsset:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

