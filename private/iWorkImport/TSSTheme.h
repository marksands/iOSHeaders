//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class NSMutableDictionary, NSString, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TSSTheme : TSPObject <TSSPresetSource, TSKModel, TSKDocumentObject>
{
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
    TSSStylesheet *mLegacyStylesheet;
    TSSStylesheet *mDocumentStylesheet;
    NSMutableDictionary *mReplacedPresetUUIDs;
}

+ (id)presetBootstrapOrder;
+ (void)registerPresetSourceClass:(Class)arg1;
+ (void)registerPresetSourceClasses;
+ (id)presetSources;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3;
+ (void)tschRegisterPresetSourceClasses;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)tsdRegisterPresetSourceClasses;
+ (void)tstRegisterPresetSourceClasses;
- (id)referencedStyles;
- (void)checkThemeStylesheetConsistency;
- (void)bootstrapThemeAlternate:(int)arg1;
- (id)p_identifierForBootstrapTheme:(int)arg1;
- (id)migratedPresetForPresetWithoutFollowingReplacements:(id)arg1;
- (id)migratedPresetForPreset:(id)arg1;
- (id)p_migratedPresetForPreset:(id)arg1 followReplacements:(_Bool)arg2;
- (id)migratedPresetUUIDForPresetUUID:(id)arg1;
- (void)clearReplacementsOfPresetUUID:(id)arg1;
- (void)recordReplacementOfPresetUUID:(id)arg1 withPresetUUID:(id)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)childEnumerator;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (_Bool)containsCGColor:(struct CGColor *)arg1;
- (id)colors;
- (unsigned long long)indexOfPreset:(id)arg1;
- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;
- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)removePreset:(id)arg1;
- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)p_shouldDoDOLCForPreset:(id)arg1;
- (void)addPreset:(id)arg1 ofKind:(id)arg2;
- (void)setPresets:(id)arg1 ofKind:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)disablePresetValidation;
- (void)enablePresetValidation;
- (_Bool)hasPresetsOfKind:(id)arg1;
- (id)presetsOfKind:(id)arg1;
- (id)presetKinds;
@property(retain, nonatomic) TSSStylesheet *documentStylesheet;
@property(retain, nonatomic) TSSStylesheet *legacyStylesheet;
@property(retain, nonatomic) NSString *themeIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 documentStylesheet:(id)arg2;
- (id)initWithContext:(id)arg1;
- (void)tschSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)tschLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)tsdSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)tsdLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)installContactCurvedShadowPresetsInStylesheet:(id)arg1;
- (void)installMoviePresetsInStylesheet:(id)arg1;
- (void)p_addStyleIfNotExisting:(id)arg1 inStylesheet:(id)arg2 withIdentifier:(id)arg3 presets:(id)arg4;
- (void)upgradeStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)tstSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)tstLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)tswpSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)tswpLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)removeTextStylesOfPresetKinds:(id)arg1 notReferencedInDocumentRoot:(id)arg2;
- (id)unmodifiableStyles;
- (id)undeletableStyles;
- (void)createCommentInfoStyleIfNeeded;
- (void)createDefaultParagraphStyleIfNeeded;
- (void)modifyHyperlinkStyleToMatchSage;
- (id)defaultEquationStyle;
- (id)defaultColumnStyle;
- (id)defaultListStyle;
- (id)defaultParagraphStyle;
- (id)hyperlinkStyle;
- (id)defaultCharacterStyle;
- (id)paragraphPresetStyles;
- (id)paragraphStylesWithPartialContentTag:(id)arg1;
- (id)paragraphStylesWithContentTag:(id)arg1;
- (id)paragraphStyleWithContentTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

