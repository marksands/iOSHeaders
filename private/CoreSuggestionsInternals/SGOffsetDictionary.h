//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGOffsetDictionary : NSObject
{
    unsigned short _count;
    CDStruct_e59a5d79 *_carrierEntries;
    CDStruct_e59a5d79 *_mruCarrierEntry;
    unsigned long long _payloadOffset;
    unsigned long long _totalPayloadSize;
    unsigned long long _sizeFactor;
}

- (id)fullMappingFromFile:(id)arg1;
- (id)stringValueForKey:(const char *)arg1 fromFile:(id)arg2;
- (int)payloadCountForKey:(const char *)arg1;
- (unsigned long long)seekLocationForKey:(const char *)arg1;
- (unsigned long long)payloadLengthForKey:(const char *)arg1;
- (CDStruct_e59a5d79 *)carrierEntryForKey:(const char *)arg1;
- (void)dealloc;
- (id)initWithFilehandle:(id)arg1 sizeFactor:(unsigned long long)arg2 keyLength:(int)arg3 singleByteOffset:(_Bool)arg4;

@end

