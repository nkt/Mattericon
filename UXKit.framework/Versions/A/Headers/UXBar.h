//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

#import <UXKit/UXBarPositioning-Protocol.h>

@class NSColor, NSString, _UXSinglePixelLine;
@protocol _UXBarItemsContainer;

@interface UXBar : UXView <NSAccessibilityGroup, UXBarPositioning>
{
    _UXSinglePixelLine *_decorationLine;
    BOOL _isInteractiveTransitioning;
    NSColor *_barTintColor;
    double _interitemSpacing;
    double _height;
    UXView<_UXBarItemsContainer> *_barItemsContainer;
    double _percent;
    UXView<_UXBarItemsContainer> *_nextItemContainer;
}

@property(retain, nonatomic) UXView<_UXBarItemsContainer> *nextItemContainer; // @synthesize nextItemContainer=_nextItemContainer;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) BOOL isInteractiveTransitioning; // @synthesize isInteractiveTransitioning=_isInteractiveTransitioning;
@property(retain, nonatomic) UXView<_UXBarItemsContainer> *barItemsContainer; // @synthesize barItemsContainer=_barItemsContainer;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(retain, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_updateBarPostion;
@property(readonly, nonatomic) long long barPosition;
- (struct CGSize)intrinsicContentSize;
- (void)_completeInteractiveTransition:(BOOL)arg1;
- (void)_finishInteractiveTransition:(BOOL)arg1 completion:(id)arg2;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_beginInteractiveTransitionToItemContainer:(id)arg1;
- (void)_animateTransitionFromContainer:(id)arg1 toContainer:(id)arg2 transition:(unsigned long long)arg3 duration:(double)arg4 fromValue:(double)arg5 toValue:(double)arg6 completion:(id)arg7;
- (void)_transitionToContainer:(id)arg1 transition:(unsigned long long)arg2 duration:(double)arg3;
@property(retain, nonatomic) NSColor *borderColor;
@property(nonatomic) BOOL bordered;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

