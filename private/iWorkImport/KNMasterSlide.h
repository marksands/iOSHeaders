//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNAbstractSlide.h>

#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class KNClassicStylesheetRecord, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface KNMasterSlide : KNAbstractSlide <TSKTransformableObject>
{
    NSString *mName;
    struct CGRect mObjectRect;
    KNClassicStylesheetRecord *mClassicStylesheetRecord;
    NSArray *mBodyParagraphStyles;
    NSArray *mBodyListStyles;
    NSString *mThumbnailTextForTitlePlaceholder;
    NSString *mThumbnailTextForBodyPlaceholder;
    _Bool mSlideObjectsLayerWithMaster;
    _Bool mHasBug16580905;
    _Bool mCalculatedHasBug16580905;
}

+ (id)p_defaultMasterGuideColor;
+ (void)setMasterGuideColor:(id)arg1;
+ (id)masterGuideColor;
+ (_Bool)hasLocalizedThumbnailText;
+ (void)initialize;
+ (void)mastersNotEquivalentWithFile:(id)arg1 lineNumber:(long long)arg2 reason:(id)arg3;
@property(readonly, nonatomic) KNClassicStylesheetRecord *classicStylesheetRecord; // @synthesize classicStylesheetRecord=mClassicStylesheetRecord;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)objectForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (id)childEnumerator;
- (void)acceptVisitor:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(_Bool)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(_Bool)arg3;
- (void)removeBuild:(id)arg1;
- (void)addBuild:(id)arg1;
- (unsigned long long)buildChunkCount;
- (id)buildChunks;
- (unsigned long long)buildCount;
- (id)builds;
- (_Bool)isMasterSlide;
- (void)updatePlaceholderText;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)flushClassicStylesheetRecord;
- (void)wasAddedToTheme:(id)arg1;
- (void)willBeAddedToTheme:(id)arg1;
- (_Bool)isThemeContent;
- (id)nonPlaceholderObjects;
- (id)imagePlaceholders;
- (_Bool)isObjectVisible;
- (void)dealloc;
- (id)thumbnailTextForPlaceholder:(id)arg1;
- (id)p_defaultThumbnailTextForPlaceholder:(id)arg1;
- (id)tagsforNewPlaceholderInfos:(id)arg1;
- (id)p_defaultTagForDrawable:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1 andSlideNode:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
@property(nonatomic) _Bool slideObjectsLayerWithMaster;
@property(retain, nonatomic) NSString *thumbnailTextForBodyPlaceholder;
@property(retain, nonatomic) NSString *thumbnailTextForTitlePlaceholder;
@property(copy, nonatomic) NSArray *bodyListStyles;
@property(copy, nonatomic) NSArray *bodyParagraphStyles;
@property(nonatomic) struct CGRect objectRect;
@property(retain, nonatomic) NSString *name;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)hasBug16580905;
- (void)generateObjectPlaceholderIfNecessary;
- (id)packageLocator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

