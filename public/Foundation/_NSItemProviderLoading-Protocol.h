//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@protocol _NSItemProviderLoading <NSObject, NSSecureCoding>
- (void)loadPreviewImageWithCompletionHandler:(void (^)(id <NSSecureCoding>, NSError *))arg1 expectedValueClass:(Class)arg2 options:(NSDictionary *)arg3;
- (void)loadItemForTypeIdentifier:(NSString *)arg1 completionHandler:(void (^)(id <NSSecureCoding>, NSError *))arg2 expectedValueClass:(Class)arg3 options:(NSDictionary *)arg4;
@end

