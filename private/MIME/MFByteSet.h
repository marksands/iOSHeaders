//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/NSCopying-Protocol.h>
#import <MIME/NSMutableCopying-Protocol.h>

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying>
{
    char mySet[32];
}

+ (id)suspiciousCodepage1252ByteSet;
+ (id)nonASCIIByteSet;
+ (id)ASCIIByteSet;
+ (id)asciiWhitespaceSet;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSet:(const char *)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)invertedSet;
- (_Bool)byteIsMember:(BOOL)arg1;

@end

