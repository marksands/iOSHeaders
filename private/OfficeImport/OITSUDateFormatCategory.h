//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategory : NSObject
{
    struct __CFDateFormatter *mInitialFormatter;
    NSMutableArray *mEntries;
}

- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(const struct __CFString **)arg3 perfect:(_Bool *)arg4;
- (id)entryForSeparator:(unsigned short)arg1;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(struct __CFLocale *)arg3;
- (id)formatStringsDictionary;
- (id)initialPattern;
- (void)dealloc;
- (id)initWithInitialPattern:(id)arg1 locale:(struct __CFLocale *)arg2;

@end

