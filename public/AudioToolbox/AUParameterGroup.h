//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioToolbox/AUParameterNode.h>

#import "NSSecureCoding.h"

@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding>
{
    NSArray *_children;
    NSMutableDictionary *_childIndicesByIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *childIndicesByIdentifier; // @synthesize childIndicesByIdentifier=_childIndicesByIdentifier;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
- (void)_deserialize:(struct CADeserializer *)arg1;
- (void)_serialize:(struct CASerializer *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_observersChanged:(_Bool)arg1 deltaCount:(int)arg2;
@property(readonly, nonatomic) NSArray *allParameters;
- (_Bool)isGroup;
- (void)dealloc;
- (id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
- (id)initWithChildren:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)_indexChildren;

@end

