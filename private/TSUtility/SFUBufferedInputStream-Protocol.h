//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFUInputStream.h"

@protocol SFUBufferedInputStream <SFUInputStream>
- (_Bool)seekWithinBufferToOffset:(long long)arg1;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
@end

