//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFApiResults-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding>
{
    CDStruct_60289f39 _has;
    int _status;
    int _resultType;
    NSArray *_flights;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasResultType;
- (_Bool)hasStatus;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

