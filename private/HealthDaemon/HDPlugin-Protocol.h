//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, NSString;

@protocol HDPlugin <NSObject>
@property(readonly, copy, nonatomic) NSString *pluginIdentifier;
- (id <HDProfileExtension>)extensionForProfile:(HDProfile *)arg1;
- (id <HDHealthDaemonExtension>)extensionForHealthDaemon:(id <HDHealthDaemon>)arg1;
@end

