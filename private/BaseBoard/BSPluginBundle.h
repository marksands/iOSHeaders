//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject
{
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_name;
    NSString *_type;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
    Class _principalClass;
}

+ (id)bundleWithPath:(id)arg1 availableSpecifications:(id)arg2;
@property(readonly, retain, nonatomic) Class principalClass; // @synthesize principalClass=_principalClass;
@property(readonly, retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *requiredClassOrProtocolName; // @synthesize requiredClassOrProtocolName=_requiredClassOrProtocolName;
@property(copy, nonatomic) NSString *specifiedClassName; // @synthesize specifiedClassName=_specifiedClassName;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (_Bool)loadPlugin:(CDUnknownBlockType)arg1;
- (_Bool)loadPlugin;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @dynamic loaded;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @dynamic valid;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end

