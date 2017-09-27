//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying>
{
    NSString *_purchaseId;
    _Bool _allowsPublisherPadApp;
    _Bool _allowsPublisherPhoneApp;
    _Bool _allowsPublisherWebSite;
    _Bool _preferredOffer;
    struct {
        unsigned int allowsPublisherPadApp:1;
        unsigned int allowsPublisherPhoneApp:1;
        unsigned int allowsPublisherWebSite:1;
        unsigned int preferredOffer:1;
    } _has;
}

@property(nonatomic) _Bool preferredOffer; // @synthesize preferredOffer=_preferredOffer;
@property(nonatomic) _Bool allowsPublisherWebSite; // @synthesize allowsPublisherWebSite=_allowsPublisherWebSite;
@property(nonatomic) _Bool allowsPublisherPadApp; // @synthesize allowsPublisherPadApp=_allowsPublisherPadApp;
@property(nonatomic) _Bool allowsPublisherPhoneApp; // @synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp;
@property(retain, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPreferredOffer;
@property(nonatomic) _Bool hasAllowsPublisherWebSite;
@property(nonatomic) _Bool hasAllowsPublisherPadApp;
@property(nonatomic) _Bool hasAllowsPublisherPhoneApp;
@property(readonly, nonatomic) _Bool hasPurchaseId;
- (void)dealloc;

@end

