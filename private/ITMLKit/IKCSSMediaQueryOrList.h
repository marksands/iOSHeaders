//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList
{
    NSMutableArray *_queryList;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (_Bool)evaluate;
- (void)addSubQueryList:(id)arg1;
- (id)subQueryList;
- (id)expressionAsString;
- (id)init;

@end

