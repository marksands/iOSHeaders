//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFTitleCardSection.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFColor, SFImage, SFText;

@protocol SFDescriptionCardSection <SFTitleCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *attributionGlyph;
@property(copy, nonatomic) NSURL *attributionURL;
@property(copy, nonatomic) NSString *attributionText;
@property(nonatomic) int textAlign;
@property(nonatomic) int imageAlign;
@property(nonatomic) _Bool descriptionExpand;
@property(copy, nonatomic) NSNumber *descriptionWeight;
@property(copy, nonatomic) NSNumber *descriptionSize;
@property(copy, nonatomic) NSNumber *titleWeight;
@property(nonatomic) _Bool titleNoWrap;
@property(retain, nonatomic) SFImage *image;
@property(copy, nonatomic) NSString *expandText;
@property(retain, nonatomic) SFText *descriptionText;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
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

