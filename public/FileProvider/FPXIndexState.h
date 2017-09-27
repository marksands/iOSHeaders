//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface FPXIndexState : NSObject
{
    NSData *_lastPage;
    NSData *_lastChangeToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)stateWithData:(id)arg1;
@property(readonly, nonatomic) NSData *lastChangeToken; // @synthesize lastChangeToken=_lastChangeToken;
@property(readonly, nonatomic) NSData *lastPage; // @synthesize lastPage=_lastPage;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long phase;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithChangeToken:(id)arg1;
- (id)initWithPage:(id)arg1 changeToken:(id)arg2;
- (id)init;

@end

