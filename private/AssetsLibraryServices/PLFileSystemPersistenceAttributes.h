//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject
{
    NSDictionary *_attributes;
}

- (id)description;
- (id)stringForKey:(id)arg1;
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(id)arg2;
- (_Bool)getInt32:(int *)arg1 forKey:(id)arg2;
- (_Bool)getUInt16:(unsigned short *)arg1 forKey:(id)arg2;
- (id)UUIDStringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end

