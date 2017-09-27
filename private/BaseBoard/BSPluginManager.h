//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSString;

@interface BSPluginManager : NSObject
{
    NSBundle *_bundle;
    NSString *_pluginDirectory;
    NSArray *_pluginBundles;
}

+ (id)managerForBundle:(id)arg1;
+ (id)mainManager;
@property(readonly, copy, nonatomic) NSArray *pluginBundles; // @synthesize pluginBundles=_pluginBundles;
@property(readonly, copy, nonatomic) NSString *pluginDirectory; // @synthesize pluginDirectory=_pluginDirectory;
@property(readonly, retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)pluginBundlesForType:(id)arg1;
- (id)pluginBundleForIdentifier:(id)arg1;
- (id)pluginBundleForName:(id)arg1 type:(id)arg2;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end

