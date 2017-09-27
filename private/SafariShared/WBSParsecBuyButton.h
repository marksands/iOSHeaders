//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecBuyButton : WBSParsecModel
{
    _Bool _enabled;
    NSString *_title;
    NSString *_subtitle;
    NSString *_offerIdentifier;
    NSString *_adamID;
    WBSParsecImageRepresentation *_imageRepresentation;
    long long _imageAlignment;
    NSURL *_url;
}

+ (id)schema;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long imageAlignment; // @synthesize imageAlignment=_imageAlignment;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(readonly, copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(readonly, copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

