//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLocale, NSString;

@interface WLKLocale : NSObject
{
    NSString *_displayName;
    NSLocale *_locale;
}

@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

