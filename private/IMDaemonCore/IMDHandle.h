//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IMDHandle : NSObject
{
    NSString *_id;
    NSString *_unformattedID;
    NSString *_countryCode;
    NSString *_personCentricID;
}

@property(retain, nonatomic) NSString *personCentricID; // @synthesize personCentricID=_personCentricID;
@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_id;
- (_Bool)isBusiness;
@property(readonly, retain, nonatomic) NSDictionary *handleInfo;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isBetterDefinedThan:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;

@end

