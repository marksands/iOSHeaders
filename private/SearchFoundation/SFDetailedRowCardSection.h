//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFDetailedRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFButton, SFCard, SFColor, SFFormattedText, SFImage, SFRichText;

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding>
{
    CDStruct_76067eec _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _preventThumbnailImageScaling;
    _Bool _isSecondaryTitleDetached;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFImage *_thumbnail;
    SFRichText *_title;
    SFFormattedText *_secondaryTitle;
    SFImage *_secondaryTitleImage;
    NSArray *_descriptions;
    SFRichText *_footnote;
    SFFormattedText *_trailingTopText;
    SFFormattedText *_trailingMiddleText;
    SFFormattedText *_trailingBottomText;
    SFActionItem *_action;
    SFButton *_button;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SFActionItem *action; // @synthesize action=_action;
@property(retain, nonatomic) SFFormattedText *trailingBottomText; // @synthesize trailingBottomText=_trailingBottomText;
@property(retain, nonatomic) SFFormattedText *trailingMiddleText; // @synthesize trailingMiddleText=_trailingMiddleText;
@property(retain, nonatomic) SFFormattedText *trailingTopText; // @synthesize trailingTopText=_trailingTopText;
@property(retain, nonatomic) SFRichText *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(nonatomic) _Bool isSecondaryTitleDetached; // @synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached;
@property(retain, nonatomic) SFImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(retain, nonatomic) SFFormattedText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) SFRichText *title; // @synthesize title=_title;
@property(nonatomic) _Bool preventThumbnailImageScaling; // @synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling;
@property(retain, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasIsSecondaryTitleDetached;
- (_Bool)hasPreventThumbnailImageScaling;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasHasTopPadding;
- (_Bool)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(readonly) Class superclass;

@end

