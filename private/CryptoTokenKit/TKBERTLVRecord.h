//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CryptoTokenKit/TKTLVRecord.h>

@interface TKBERTLVRecord : TKTLVRecord
{
}

+ (id)parseFromDataSource:(id)arg1;
+ (id)dataForTag:(unsigned long long)arg1;
+ (unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char *)arg2;
+ (id)zuluDateFormatter;
- (id)initWithTag:(unsigned long long)arg1 records:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;

@end

