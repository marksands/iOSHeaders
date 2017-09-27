//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFCardSection.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFColor, SFImage, SFRichText;

@protocol SFSocialMediaPostCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *timestamp;
@property(retain, nonatomic) SFImage *picture;
@property(retain, nonatomic) SFRichText *post;
@property(retain, nonatomic) SFImage *profilePicture;
@property(retain, nonatomic) SFImage *verifiedGlyph;
@property(copy, nonatomic) NSString *handle;
@property(copy, nonatomic) NSNumber *nameMaxLines;
@property(nonatomic) _Bool nameNoWrap;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

