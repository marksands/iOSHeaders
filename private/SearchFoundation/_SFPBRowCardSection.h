//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBRowCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int imageIsRightAligned:1;
        unsigned int keyNoWrap:1;
        unsigned int keyWeight:1;
        unsigned int valueNoWrap:1;
        unsigned int valueWeight:1;
        unsigned int cardPaddingBottom:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _imageIsRightAligned;
    _Bool _keyNoWrap;
    _Bool _valueNoWrap;
    _Bool _cardPaddingBottom;
    int _separatorStyle;
    int _keyWeight;
    int _valueWeight;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBImage *_image;
    _SFPBRichText *_leadingText;
    _SFPBRichText *_trailingText;
    NSString *_leftText;
    NSString *_rightText;
    _SFPBImage *_attributionImage;
    NSString *_key;
    NSString *_value;
    _SFPBRichText *_leadingSubtitle;
    _SFPBRichText *_trailingSubtitle;
}

@property(retain, nonatomic) _SFPBRichText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain, nonatomic) _SFPBRichText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(nonatomic) _Bool cardPaddingBottom; // @synthesize cardPaddingBottom=_cardPaddingBottom;
@property(nonatomic) int valueWeight; // @synthesize valueWeight=_valueWeight;
@property(nonatomic) _Bool valueNoWrap; // @synthesize valueNoWrap=_valueNoWrap;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int keyWeight; // @synthesize keyWeight=_keyWeight;
@property(nonatomic) _Bool keyNoWrap; // @synthesize keyNoWrap=_keyNoWrap;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) _SFPBImage *attributionImage; // @synthesize attributionImage=_attributionImage;
@property(copy, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(copy, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
@property(retain, nonatomic) _SFPBRichText *trailingText; // @synthesize trailingText=_trailingText;
@property(retain, nonatomic) _SFPBRichText *leadingText; // @synthesize leadingText=_leadingText;
@property(nonatomic) _Bool imageIsRightAligned; // @synthesize imageIsRightAligned=_imageIsRightAligned;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTrailingSubtitle;
@property(readonly, nonatomic) _Bool hasLeadingSubtitle;
@property(readonly, nonatomic) _Bool hasCardPaddingBottom;
@property(readonly, nonatomic) _Bool hasValueWeight;
@property(readonly, nonatomic) _Bool hasValueNoWrap;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKeyWeight;
@property(readonly, nonatomic) _Bool hasKeyNoWrap;
@property(readonly, nonatomic) _Bool hasKey;
@property(readonly, nonatomic) _Bool hasAttributionImage;
@property(readonly, nonatomic) _Bool hasRightText;
@property(readonly, nonatomic) _Bool hasLeftText;
@property(readonly, nonatomic) _Bool hasTrailingText;
@property(readonly, nonatomic) _Bool hasLeadingText;
@property(readonly, nonatomic) _Bool hasImageIsRightAligned;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

