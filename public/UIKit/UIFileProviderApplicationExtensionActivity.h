//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIApplicationExtensionActivity.h>

@class LSPlugInKitProxy, NSArray;

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity
{
    LSPlugInKitProxy *_pluginProxy;
    NSArray *_groupContainerURLs;
}

@property(retain, nonatomic) NSArray *groupContainerURLs; // @synthesize groupContainerURLs=_groupContainerURLs;
@property(retain, nonatomic) LSPlugInKitProxy *pluginProxy; // @synthesize pluginProxy=_pluginProxy;
- (void).cxx_destruct;
- (_Bool)_sharesGroupContainerWithURL:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;

@end

