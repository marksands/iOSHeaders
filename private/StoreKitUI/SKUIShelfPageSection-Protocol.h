//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration;

@protocol SKUIShelfPageSection <NSObject>
@property(readonly, nonatomic) SKUIShelfPageComponent *pageComponent;
@property(readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration;
- (id)initWithPageComponent:(SKUIShelfPageComponent *)arg1;
- (id)initWithPageComponent:(SKUIShelfPageComponent *)arg1 configuration:(SKUIShelfPageSectionConfiguration *)arg2;
@end

