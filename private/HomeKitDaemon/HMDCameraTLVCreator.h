//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDCameraTLVCreator : HMFObject
{
    struct {
        char *ptr;
        unsigned long long len;
        unsigned long long maxLen;
        char *mallocedPtr;
        unsigned char inlineBuffer[300];
    } _tlv;
    _Bool _addHasFailed;
}

+ (id)creatorWithBufferSize:(unsigned long long)arg1;
+ (id)creator;
- (_Bool)addTLV:(unsigned long long)arg1 uuid:(id)arg2;
- (_Bool)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3;
- (_Bool)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3;
- (_Bool)addTLV:(unsigned long long)arg1 number:(id)arg2;
- (_Bool)addTLV:(unsigned long long)arg1 string:(id)arg2;
- (_Bool)addTLV:(unsigned long long)arg1 data:(id)arg2;
- (id)serialize;
- (void)dealloc;
- (id)initWithBufferSize:(unsigned long long)arg1;

@end

