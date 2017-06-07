//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFText.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFRichText-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFRichText : SFText <SFRichText, NSSecureCoding>
{
    struct {
        unsigned int starRating:1;
    } _has;
    double _starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

+ (_Bool)supportsSecureCoding;
+ (id)textWithString:(id)arg1;
@property(copy, nonatomic) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasStarRating;
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long maxLines;
@property(readonly) Class superclass;
@property(copy) NSString *text;

@end

