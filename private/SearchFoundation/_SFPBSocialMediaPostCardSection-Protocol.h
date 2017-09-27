//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBSocialMediaPostCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasFootnote;
@property(copy, nonatomic) NSString *footnote;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(copy, nonatomic) NSString *timestamp;
@property(readonly, nonatomic) _Bool hasPicture;
@property(retain, nonatomic) _SFPBImage *picture;
@property(readonly, nonatomic) _Bool hasPost;
@property(retain, nonatomic) _SFPBRichText *post;
@property(readonly, nonatomic) _Bool hasProfilePicture;
@property(retain, nonatomic) _SFPBImage *profilePicture;
@property(readonly, nonatomic) _Bool hasVerifiedGlyph;
@property(retain, nonatomic) _SFPBImage *verifiedGlyph;
@property(readonly, nonatomic) _Bool hasHandle;
@property(copy, nonatomic) NSString *handle;
@property(readonly, nonatomic) _Bool hasNameMaxLines;
@property(nonatomic) int nameMaxLines;
@property(readonly, nonatomic) _Bool hasNameNoWrap;
@property(nonatomic) _Bool nameNoWrap;
@property(readonly, nonatomic) _Bool hasName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(nonatomic) _Bool hasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(nonatomic) _Bool canBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

