//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject
{
    NSMutableDictionary *mMappings;
}

- (void)addDefaultMappings:(_Bool)arg1;
- (id)description;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)addMapping:(int)arg1 index:(int)arg2;
- (int)mappingForIndex:(int)arg1;
- (void)dealloc;
- (id)init;

@end

