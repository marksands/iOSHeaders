//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUAssetActionPerformer.h>

#import "PUDeletePhotosActionControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PUDeletePhotosActionControllerDelegate>
{
    id <PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(nonatomic) __weak id <PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
- (void).cxx_destruct;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (long long)preferredAlertControllerStyle;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (id)_presentingViewControllerForExpungeConfirmation;
- (void)_performUserInteractionTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

