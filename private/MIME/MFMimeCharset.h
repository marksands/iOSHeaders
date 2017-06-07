//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFMimeCharset : NSObject
{
    unsigned int _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned int)arg1;
+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(_Bool)arg1;
- (id)description;
- (id)primaryLanguage;
- (id)displayName;
- (_Bool)useBase64InHeaders;
- (_Bool)coversLargeUnicodeSubset;
- (_Bool)canBeUsedForOutgoingMessages;
- (id)charsetName;
- (unsigned int)encoding;
- (void)dealloc;
- (void)_setPrimaryLanguage:(id)arg1;
- (id)initWithEncoding:(unsigned int)arg1;

@end

