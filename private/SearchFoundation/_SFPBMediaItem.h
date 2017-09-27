//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBMediaItem.h"

@class NSArray, NSData, NSString, _SFPBImage, _SFPBPunchout, _SFPBText;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding>
{
    NSString *_title;
    _SFPBText *_subtitleText;
    _SFPBImage *_thumbnail;
    _SFPBImage *_reviewGlyph;
    _SFPBImage *_overlayImage;
    NSString *_reviewText;
    _SFPBPunchout *_punchout;
    NSArray *_subtitleCustomLineBreakings;
    NSArray *_buyOptions;
    NSString *_contentAdvisory;
    _SFPBImage *_contentAdvisoryImage;
}

@property(retain, nonatomic) _SFPBImage *contentAdvisoryImage; // @synthesize contentAdvisoryImage=_contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions; // @synthesize buyOptions=_buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreakings; // @synthesize subtitleCustomLineBreakings=_subtitleCustomLineBreakings;
@property(retain, nonatomic) _SFPBPunchout *punchout; // @synthesize punchout=_punchout;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property(retain, nonatomic) _SFPBImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) _SFPBImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property(retain, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) _SFPBText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasContentAdvisoryImage;
@property(readonly, nonatomic) _Bool hasContentAdvisory;
- (id)buyOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buyOptionsCount;
- (void)addBuyOptions:(id)arg1;
- (void)clearBuyOptions;
- (id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (void)addSubtitleCustomLineBreaking:(id)arg1;
- (void)clearSubtitleCustomLineBreaking;
- (void)setSubtitleCustomLineBreaking:(id)arg1;
@property(readonly, nonatomic) _Bool hasPunchout;
@property(readonly, nonatomic) _Bool hasReviewText;
@property(readonly, nonatomic) _Bool hasOverlayImage;
@property(readonly, nonatomic) _Bool hasReviewGlyph;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool hasSubtitleText;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

