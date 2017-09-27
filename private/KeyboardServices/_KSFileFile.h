//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KeyboardServices/_KSFileEntry.h>

#import "NSSecureCoding.h"
#import "_KSBlobSaver.h"

@class NSDate, NSURL;

@interface _KSFileFile : _KSFileEntry <NSSecureCoding, _KSBlobSaver>
{
    int _protectionClass;
    NSURL *_url;
    NSDate *_lastModified;
    unsigned long long _offset;
    unsigned long long _size;
}

+ (_Bool)supportsSecureCoding;
+ (int)protectionFromURL:(id)arg1;
- (void).cxx_destruct;
- (void)restoreToPath:(id)arg1;
- (void)consistencyCheck;
- (id)description;
- (id)URL;
- (id)lastModified;
- (unsigned long long)size;
- (id)contents;
- (void)saveTo:(id)arg1;
- (void)saveAttributesToURL:(id)arg1;
- (void)loadAttributesFromURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

