//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXAssetCollectionActionManager.h>

@class NSDictionary, NSMapTable, PXAssetCollectionActionPerformer;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager
{
    NSDictionary *__performerClassesByType;
    NSMapTable *__actionTypeByBarButtonItem;
    NSMapTable *__actionTypeByPreviewAction;
    PXAssetCollectionActionPerformer *__activePerformer;
}

@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSMapTable *_actionTypeByPreviewAction; // @synthesize _actionTypeByPreviewAction=__actionTypeByPreviewAction;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
@property(readonly, nonatomic) NSDictionary *_performerClassesByType; // @synthesize _performerClassesByType=__performerClassesByType;
- (void).cxx_destruct;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_executeActionTypeIfPossible:(id)arg1;
- (void)_handlePreviewAction:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (Class)_firstPossiblePerformerForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)previewActionGroupForActionType:(id)arg1;
- (id)previewActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)canPerformActionType:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;

@end

