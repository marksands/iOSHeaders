//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKExpressPassInformation.h>

@class NSDictionary, NSString;

@interface NPKExpressPassBookmark : PKExpressPassInformation
{
    unsigned long long _setupStatus;
}

@property(readonly, nonatomic) unsigned long long setupStatus; // @synthesize setupStatus=_setupStatus;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionary;
@property(readonly, nonatomic) NSString *appletIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3 setupStatus:(unsigned long long)arg4;

@end

