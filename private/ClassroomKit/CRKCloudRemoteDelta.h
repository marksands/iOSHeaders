//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CRKCloudRemoteDelta : NSObject
{
    NSDictionary *_changeRecordsByRecordType;
    NSDictionary *_deleteIdsByRecordType;
}

+ (id)new;
@property(retain, nonatomic) NSDictionary *deleteIdsByRecordType; // @synthesize deleteIdsByRecordType=_deleteIdsByRecordType;
@property(retain, nonatomic) NSDictionary *changeRecordsByRecordType; // @synthesize changeRecordsByRecordType=_changeRecordsByRecordType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *changeRecordIdsByRecordType;
- (_Bool)isEmpty;
- (id)initWithChangedRecordsByRecordType:(id)arg1 deleteIdsByRecordType:(id)arg2;
- (id)init;

@end

