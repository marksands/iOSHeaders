//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSString;

@protocol SKUIJSUpdatableAssetController <JSExport>
- (void)refreshCachedManifest:(JSValue *)arg1;
- (NSString *)newestCachedManifestVersion;
- (NSString *)loadResource:(NSString *)arg1;
- (NSString *)currentManifestVersion;
@end

