//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer
{
    unsigned long long _begin;
    unsigned long long _end;
    unsigned long long _length;
    unsigned long long _readBytes;
    unsigned char _encoded[4];
    _Bool _beginComplete;
    _Bool _dataComplete;
    _Bool _validLength;
    _Bool _lineComplete;
    _Bool _passthrough;
}

- (void)done;
- (long long)appendData:(id)arg1;

@end

