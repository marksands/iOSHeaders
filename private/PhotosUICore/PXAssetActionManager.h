//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXActionManager.h>

@class PXSelectionSnapshot;

@interface PXAssetActionManager : PXActionManager
{
    PXSelectionSnapshot *_selectionSnapshot;
}

@property(readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)canPerformAssetVariationActions;
- (id)init;
- (id)initWithSelectionSnapshot:(id)arg1;
- (void)px_registerAdditionalPerformerClasses;

@end

