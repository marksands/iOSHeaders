//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDBuild.h>

__attribute__((visibility("hidden")))
@interface PDChartBuild : PDBuild
{
    int mChartBuildType;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)initWithBuildType:(int)arg1;

@end

