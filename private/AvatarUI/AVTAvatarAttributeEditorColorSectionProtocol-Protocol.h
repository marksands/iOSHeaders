//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVTAvatarAttributeEditorSection.h"

@class AVTAvatarColorVariationStore, NSArray;

@protocol AVTAvatarAttributeEditorColorSectionProtocol <AVTAvatarAttributeEditorSection>
@property(readonly, nonatomic) id <AVTAvatarAttributeEditorColorSectionProtocol> subSection;
@property(readonly, nonatomic) _Bool alwaysShowExtended;
@property(readonly, copy, nonatomic) NSArray *extendedItems;
@property(readonly, copy, nonatomic) NSArray *primaryItems;
@property(readonly, nonatomic) AVTAvatarColorVariationStore *colorVariationStore;
@end

