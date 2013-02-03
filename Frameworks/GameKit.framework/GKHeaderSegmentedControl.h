/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKHeaderSegmentedControlDelegate>, UIImageView, NSArray;

@interface GKHeaderSegmentedControl : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    NSArray *_abbreviatedLabels;
    UIImageView *_backgroundView;
    float _calculatedFontSize;
    } _capInsets;
    <GKHeaderSegmentedControlDelegate> *_delegate;
    float _dividerOffsetY;
    UIImageView *_foregroundView;
    NSArray *_labels;
    float _maxWidth;
    float _minFontSizeDelta;
    NSArray *_processedLabels;
    SEL _secondaryFontSelector;
    SEL _segmentLayoutSelector;
    struct { float x1; float x2; id x3; } *_segmentNodes;
    int _segmentWidthAllocationStyle;
    int _segmentedControlStyle;
    unsigned int _selectedSegment;
    unsigned int _selectedSegmentIndex;
    } _selectionInsets;
    float _textBaselineNudgeY;
    float _textPaddingWidth;
    SEL _themeBackgroundImageSelector;
    SEL _themeDividerImageSelector;
    SEL _themeFontSelector;
    SEL _themeNormalTextColorSelector;
    SEL _themeSecondaryTextColorSelector;
    SEL _themeSelectedTextColorSelector;
    SEL _themeSelectionImageSelector;
    SEL _themeTextSelectedShadowColorSelector;
    SEL _themeTextShadowColorSelector;
}

@property(retain) NSArray * abbreviatedLabels;
@property(retain) UIImageView * backgroundView;
@property float calculatedFontSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;
@property(readonly) float defaultHeight;
@property <GKHeaderSegmentedControlDelegate> * delegate;
@property float dividerOffsetY;
@property(retain) UIImageView * foregroundView;
@property(retain) NSArray * labels;
@property float maxWidth;
@property float minFontSizeDelta;
@property(retain) NSArray * processedLabels;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } segmentBounds;
@property SEL segmentLayoutSelector;
@property struct { float x1; float x2; id x3; }* segmentNodes;
@property int segmentWidthAllocationStyle;
@property int segmentedControlStyle;
@property unsigned int selectedSegmentIndex;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } selectionInsets;
@property float textBaselineNudgeY;
@property float textPaddingWidth;
@property SEL themeBackgroundImageSelector;
@property SEL themeDividerImageSelector;
@property SEL themeFontSelector;
@property SEL themeNormalTextColorSelector;
@property SEL themeSecondaryFontSelector;
@property SEL themeSecondaryTextColorSelector;
@property SEL themeSelectedTextColorSelector;
@property SEL themeSelectionImageSelector;
@property SEL themeTextSelectedShadowColorSelector;
@property SEL themeTextShadowColorSelector;

- (void)_tap:(id)arg1;
- (id)abbreviatedLabels;
- (void)applyCalculatedFontSize;
- (id)backgroundView;
- (float)calculatedFontSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (void)clearLayoutCache;
- (void)dealloc;
- (float)defaultHeight;
- (id)delegate;
- (id)dividerImage;
- (float)dividerOffsetY;
- (float)dividerWidth;
- (void)drawForegroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawLabelTextAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)enumerateSegmentContentRectsUsingBlock:(id)arg1;
- (id)foregroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateProcessedLabels;
- (id)labels;
- (id)largeRibbonBackgroundImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSegmentsEnlargingCenter:(struct { float x1; float x2; id x3; }*)arg1 number:(int)arg2;
- (void)layoutSegmentsEqually:(struct { float x1; float x2; id x3; }*)arg1 number:(int)arg2;
- (void)layoutSegmentsProportionally:(struct { float x1; float x2; id x3; }*)arg1 number:(int)arg2;
- (void)layoutSubviews;
- (float)maxWidth;
- (float)minFontSizeDelta;
- (id)processedLabels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })segmentBounds;
- (SEL)segmentLayoutSelector;
- (struct { float x1; float x2; id x3; }*)segmentNodes;
- (int)segmentWidthAllocationStyle;
- (int)segmentedControlStyle;
- (unsigned int)selectedSegmentIndex;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionInsets;
- (void)setAbbreviatedLabels:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCalculatedFontSize:(float)arg1;
- (void)setCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerOffsetY:(float)arg1;
- (void)setForegroundView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabels:(id)arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setMinFontSizeDelta:(float)arg1;
- (void)setNeedsLayout;
- (void)setProcessedLabels:(id)arg1;
- (void)setSegmentLayoutSelector:(SEL)arg1;
- (void)setSegmentNodes:(struct { float x1; float x2; id x3; }*)arg1;
- (void)setSegmentWidthAllocationStyle:(int)arg1;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)setSelectedSegmentIndex:(unsigned int)arg1;
- (void)setSelectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTextBaselineNudgeY:(float)arg1;
- (void)setTextPaddingWidth:(float)arg1;
- (void)setThemeBackgroundImageSelector:(SEL)arg1;
- (void)setThemeDividerImageSelector:(SEL)arg1;
- (void)setThemeFontSelector:(SEL)arg1;
- (void)setThemeNormalTextColorSelector:(SEL)arg1;
- (void)setThemeSecondaryFontSelector:(SEL)arg1;
- (void)setThemeSecondaryTextColorSelector:(SEL)arg1;
- (void)setThemeSelectedTextColorSelector:(SEL)arg1;
- (void)setThemeSelectionImageSelector:(SEL)arg1;
- (void)setThemeTextSelectedShadowColorSelector:(SEL)arg1;
- (void)setThemeTextShadowColorSelector:(SEL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)textBaselineNudgeY;
- (float)textPaddingWidth;
- (SEL)themeBackgroundImageSelector;
- (SEL)themeDividerImageSelector;
- (SEL)themeFontSelector;
- (SEL)themeNormalTextColorSelector;
- (SEL)themeSecondaryFontSelector;
- (SEL)themeSecondaryTextColorSelector;
- (SEL)themeSelectedTextColorSelector;
- (SEL)themeSelectionImageSelector;
- (SEL)themeTextSelectedShadowColorSelector;
- (SEL)themeTextShadowColorSelector;

@end