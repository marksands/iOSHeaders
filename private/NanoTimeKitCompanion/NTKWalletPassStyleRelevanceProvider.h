//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRelevanceProvider.h>

@interface NTKWalletPassStyleRelevanceProvider : NTKRelevanceProvider
{
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPassStyle:(long long)arg1;

@end

