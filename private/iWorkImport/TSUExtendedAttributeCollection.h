//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUExtendedAttributeCollection : NSObject
{
    NSMutableDictionary *_attributes;
}

+ (_Bool)removeExtraExtendedAttributesAtPath:(id)arg1 forIntent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2;
- (id)extendedAttributeForName:(id)arg1;
- (id)allAttributes;
- (_Bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 forRemoval:(_Bool)arg4 error:(id *)arg5;
- (_Bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 forRemoval:(_Bool)arg2 options:(int)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

