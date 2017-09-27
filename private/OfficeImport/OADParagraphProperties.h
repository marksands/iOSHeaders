//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADCharacterProperties.h>

@class NSArray, OADBulletColor, OADBulletFont, OADBulletProperties, OADBulletSize, OADTextSpacing;

__attribute__((visibility("hidden")))
@interface OADParagraphProperties : OADCharacterProperties
{
    int mLevel;
    OADBulletSize *mBulletSize;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADTextSpacing *mLineSpacing;
    OADTextSpacing *mBeforeSpacing;
    OADTextSpacing *mAfterSpacing;
    NSArray *mTabStops;
    float mLeftMargin;
    float mRightMargin;
    float mIndent;
    float mDefaultTab;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    unsigned int mIsLatinLineBreak:1;
    unsigned int mIsHangingPunctuation:1;
    unsigned int mHasLevel:1;
    unsigned int mHasLeftMargin:1;
    unsigned int mHasRightMargin:1;
    unsigned int mHasIndent:1;
    unsigned int mHasDefaultTab:1;
    unsigned int mHasBulletCharSet:1;
    unsigned int mHasAlign:1;
    unsigned int mHasWrap:1;
    unsigned int mHasFontAlign:1;
    unsigned int mHasIsLatinLineBreak:1;
    unsigned int mHasIsHangingPunctuation:1;
}

+ (id)defaultProperties;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)overrideWithProperties:(id)arg1;
- (void)setBulletCharSet:(int)arg1;
- (int)bulletCharSet;
- (_Bool)hasBulletCharSet;
- (void)setBulletProperties:(id)arg1;
- (id)bulletProperties;
- (_Bool)hasBulletProperties;
- (void)setBulletFont:(id)arg1;
- (id)bulletFont;
- (_Bool)hasBulletFont;
- (void)setBulletColor:(id)arg1;
- (id)bulletColor;
- (_Bool)hasBulletColor;
- (void)setBulletSize:(id)arg1;
- (id)bulletSize;
- (_Bool)hasBulletSize;
- (void)setIsHangingPunctuation:(_Bool)arg1;
- (_Bool)isHangingPunctuation;
- (_Bool)hasIsHangingPunctuation;
- (void)setIsLatinLineBreak:(_Bool)arg1;
- (_Bool)isLatinLineBreak;
- (_Bool)hasIsLatinLineBreak;
- (void)setFontAlign:(unsigned char)arg1;
- (unsigned char)fontAlign;
- (_Bool)hasFontAlign;
- (void)setWrap:(unsigned char)arg1;
- (unsigned char)wrap;
- (_Bool)hasWrap;
- (void)setDefaultTab:(float)arg1;
- (float)defaultTab;
- (_Bool)hasDefaultTab;
- (void)setAlign:(unsigned char)arg1;
- (unsigned char)align;
- (_Bool)hasAlign;
- (void)setIndent:(float)arg1;
- (float)indent;
- (_Bool)hasIndent;
- (void)setLevel:(int)arg1;
- (int)level;
- (_Bool)hasLevel;
- (void)setRightMargin:(float)arg1;
- (float)rightMargin;
- (_Bool)hasRightMargin;
- (double)nonOveridenLeftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (_Bool)hasLeftMargin;
- (void)setTabStops:(id)arg1;
- (id)tabStops;
- (_Bool)hasTabStops;
- (void)setAfterSpacing:(id)arg1;
- (id)afterSpacing;
- (_Bool)hasAfterSpacing;
- (void)setBeforeSpacing:(id)arg1;
- (id)beforeSpacing;
- (_Bool)hasBeforeSpacing;
- (void)setLineSpacing:(id)arg1;
- (id)lineSpacing;
- (_Bool)hasLineSpacing;
- (void)dealloc;
- (id)initWithDefaults;
- (id)init;

@end

