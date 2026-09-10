# BW Risk Assessment — Risk Management Report
**Date: 2026-09-10 (Thursday), ~14:41 ET (real ET verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Prior BW report: 2026-09-10 ~10:41 ET (Grade D). This is a routine intraday re-check, not triggered by a new structural event.

---

## Overall Portfolio Risk Grade: **D** (held)

No new structural break and no new risk *category* since 10:41 ET — VIX is essentially flat (16.46 now vs. 16.43 then), Hormuz remains at the same escalation tier (still the "biggest wave of attacks" framing, no confirmed fresh tier-up since 9/9), and the 10yr is still pinned above rule 6a's 4.75% threshold (~4.85% per WebSearch aggregation). What changed is a **deepening of two already-flagged risks and a partial improvement in a third**: the pool's mark-to-market loss roughly quadrupled since this morning (from ~-$0.035 to **-$0.133**), OMCL printed a fresh worst-ever unrealized loss (-31.16%, vs. -30.52% at 10:41), but XLE — the risk this desk elevated to its #1 slot this morning after two straight red sessions — **pared its loss from -1.26% to essentially flat (-0.30%)** intraday, the first sign today that the hedge hasn't fully stopped decoupling. Net: two deteriorating data points and one improving one, roughly a wash — grade held at D rather than moved either direction.

## Single biggest risk right now

**The book's mark-to-market loss is deepening intraday on the same day it already opened net-negative, driven disproportionately by its two least-liquid, highest-conviction-discount names (OMCL and GEHC) — exactly where a downdraft has the least room to be absorbed.** Pool value (equity + deployable cash, base $50) is now **$49.8669, a -$0.1331 (-0.27%) accumulated loss**, roughly 4x wider than the -$0.035 read this desk logged four hours ago. OMCL, already this book's only loss position, marked a new worst-ever -31.16% vs. cost this afternoon. GEHC remains below its own $65 mandatory-revisit line (already fired and resolved this morning — no new trigger here, just continued proximity). All six holdings are red for the day; NVDA and OMCL both deepened their losses since the last check while XLE and GEHC modestly pared theirs.

Status of the standing watch items, re-checked fresh this run:
1. **GEHC $65 revisit trigger — already FIRED and RESOLVED at 09:38 ET; rule-6 gate already cleared by 11:37 ET.** No new action required. Live $64.23 (-1.44% today) — still below the line, but this is a continuation of an already-resolved event, not a fresh fire. No re-read owed per rule 4 unless a genuinely new catalyst appears.
2. **Hormuz — unchanged tier vs. this morning.** No fresh escalation confirmed via this run's WebSearch beyond the already-known 9/9 wave (10 ships claimed struck, Jordan base hit, five Iranian tankers destroyed). Oil still elevated (Brent >$100 per this run's sources); applying rule 4's dateline skepticism, this is continuation, not a new shock.
3. **VIX — 16.46, essentially flat vs. this morning's 16.43.** Confirms rather than extends the elevated-but-not-yet-stress read from 10:41 ET; still well short of the 20+ "stress" band.
4. **Rule 6a rate-shock trigger — unchanged, still fired.** 10yr reading ~4.85% per this run's WebSearch aggregation (within the 4.80-4.91% band different sources have cited today), consistently above the 4.75% threshold all week. Pause on new NVDA/VTI/VXUS core-ups remains correctly in effect.
5. **NVDA+OMCL combined concentration — ~20.19% of equity, buffer ~4.81pp to the 25% cap.** Clean, essentially flat vs. this morning's ~20.24%.
6. **NVDA CDS — still unresolved via WebSearch.** Standing data-gap flag carries forward unchanged.
7. **OMCL unrealized loss — new worst-ever mark, -31.16% vs. cost (was -30.52% at 10:41 ET).** DCA gate remains governed by a negative accumulated-profit base (see §8) — mechanically further from firing than at any prior reading.
8. **XLE hedge-decoupling watch (elevated to top-3 this morning after two straight red sessions) — partial improvement this run, not resolution.** XLE pared its loss from -1.26% (10:41 ET) to -0.30% now, the closest to flat of anything in the book today. This is one data point inside the same session, not a third consecutive session of failure or a clean re-decoupling — logged plainly as a partial positive rather than rounded up to "fixed."

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Pool-level mark-to-market loss (deepening intraday) | 🔴 High (elevated this run) | -$0.133 (-0.27%), ~4x wider than this morning's -$0.035; the accumulating-loss trend, not any single position, is the newest concern |
| OMCL unrealized loss | 🔴 High (elevated from Medium-High) | New worst-ever mark, -31.16% vs. cost; DCA gate mechanically further from firing (negative profit base) |
| Geopolitical/oil shock (Hormuz) | 🔴 High | Unchanged tier vs. this morning; Brent still >$100 |
| Look-through AI/tech concentration | 🔴 High | ~29.66% of equity, essentially unchanged |
| Correlation collapse / hedge decoupling | 🟠 Medium-High (eased from High) | All six holdings still red today, but XLE pared its loss to near-flat this run — the clearest partial improvement of the day, not yet a clean re-decoupling |
| GEHC entry-cushion | 🟡 Medium | Already-resolved trigger; continued sub-$65 print, no new structural concern found this run |
| VIX / equity-vol confirmation | 🟡 Medium | 16.46, flat vs. this morning's 16.43 — confirmed elevated, not worsening further today |
| Rule 6a rate-shock trigger | 🟡 Medium | Pause remains fired; ~4.85% read, consistently above threshold |
| Single-stock concentration (NVDA+OMCL combined) | 🟡 Medium | ~20.19% of equity, ~4.81pp under the 25% trigger |
| Geographic/currency risk | 🟡 Medium | VXUS ~30.39% of equity carries direct FX exposure |
| Liquidity risk (book-wide) | 🟢 Low | Four of six holdings mega-cap/large-ETF liquid; OMCL and GEHC remain the moderate-liquidity names to watch |
| Cash floor buffer | 🟢 Low | Deployable cash $6.00, ~12.03% of pool vs. the 10% floor — defended cleanly |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-09-10 ~14:41 ET)

`get_portfolio`: total value **$99.8669** (cash $56.00 + equity $43.8669), down from this morning's ~$99.9652-99.9707 range. Pool ≈ $50 base **minus ~$0.1331 accumulated loss ≈ $49.8669** — the deepest intraday mark-to-market loss this book has logged, roughly 4x wider than the -$0.035 read four hours ago. Deployable cash $6.00 (cash $56.00 less the $50 untouchable reserve) ≈ **12.03% of pool**.

| Holding | Qty | Live price | Chg vs. 9/9 close | Avg cost | Unrealized P&L | Value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $218.04 | -2.52% | $201.40 | +8.26% | $5.413 | 12.34% | 10.85% |
| VTI | 0.036690 | $373.16 | -0.64% | $370.40 | +0.75% | $13.694 | 31.22% | 27.46% |
| VXUS | 0.154525 | $86.275 | -1.30% | $84.13 | +2.55% | $13.333 | 30.39% | 26.74% |
| OMCL | 0.106405 | $32.352 | -3.83% | $46.99 | **-31.16% (new worst-ever mark)** | $3.442 | 7.85% | 6.90% |
| XLE | 0.086775 | $65.116 | -0.30% | $57.62 | +13.02% | $5.650 | 12.88% | 11.33% |
| GEHC | 0.036393 | $64.23 | -1.44% | $68.69 | -6.49% | $2.337 | 5.33% | 4.69% |
| Cash (deployable) | — | — | — | — | — | $6.00 | — | 12.03% |

Note: GEHC's live print ($64.23) is essentially back to this morning's 09:38 ET post-entry low ($64.235) after briefly recovering to $64.57 at 10:41 ET — a round trip within the same session, not a fresh decline past a new level.

## 2. Correlation analysis between holdings

**All six holdings remain red intraday, but the internal picture shifted since 10:41 ET.** NVDA (-2.52%), VTI (-0.64%), and VXUS (-1.30%, combined 74.0% of equity) continue moving as one correlated macro factor, with NVDA and VXUS both deepening their losses since the last check. OMCL (-3.83%) worsened the most of any holding this run, with no fresh company-specific catalyst found — consistent with broad risk-off drag compounding on top of this book's already-most-volatile name, not a new idiosyncratic shock. **XLE (-0.30%) is the session's clearest change**: it pared four-fifths of its 10:41 ET loss (-1.26% → -0.30%), the first sign today that the hedge's two-session decoupling failure isn't a settled new regime — still not the clean "green while everything else is red" decoupling this book validated for most of the conflict, but a real move back toward it within the same session. GEHC (-1.44%) gave back its late-morning partial recovery, tracking the broad-market names again rather than standing out either way.

## 3. Sector concentration risk

Face-value: AI/semis (NVDA) 12.34% direct; broad-market ETFs (VTI/VXUS) 61.61% combined; healthcare-tech (OMCL 7.85% + GEHC 5.33%) 13.18% combined; energy (XLE) 12.88%.

**Look-through concentration (BR's standing ~36% AI-adjacent estimate for VTI, ~20% for VXUS):**
- NVDA direct: 12.34%
- VTI embedded (~36% of 31.22%): ~11.24%
- VXUS embedded (~20% of 30.39%): ~6.08%
- **Total look-through AI/mega-cap-tech exposure: ~29.66% of equity** — essentially unchanged from this morning's ~29.67%, still the book's single largest structural risk factor, roughly 2.4x the headline NVDA line.

## 4. Geographic exposure and currency risk

VXUS (30.39% of equity, ~$13.33) remains the book's only direct FX exposure — non-US developed/emerging market equities, indirect exposure to EUR, JPY, GBP, and a basket of EM currencies. It deepened its loss since 10:41 ET (-0.83%→-1.30%), moving with the rest of the book rather than decoupling — this book's Hormuz-driven risk-off events transmit globally (oil, rates, risk sentiment), so VXUS's geographic diversification continues to offer less protection on a day like today than on a US-idiosyncratic shock.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | High | Long-duration growth equity; DCF-heavy valuation (MS's model, ~5.8% overvalued as of 9/10's morning pullback), multiple compresses hard on rate spikes |
| VTI | Medium-High | Broad market, ~35%+ growth/tech-tilted; diluted NVDA-style sensitivity |
| VXUS | Medium | More value/financials-tilted than VTI; somewhat less duration-sensitive |
| OMCL | Medium | Small/mid-cap healthcare-tech; higher cost-of-capital sensitivity, though its own idiosyncratic volatility (-31.16% vs. cost) swamps rate effects most days |
| XLE | Low-Medium | Commodity-price-driven, not discount-rate-driven; this run's partial re-decoupling is a data point against over-weighting the "rate/oil shock removes XLE's offset" read from this morning |
| GEHC | Medium | Steadier cash flows than pure growth tech; MS's rebuilt DCF (10:16 ET, FV ≈$71.16) is still discount-rate-sensitive, and its widest-yet undervaluation gap is ~60% price-driven per MS's own framing, not a re-rating |

Rule 6a's pause (10yr reading ~4.85% per this run's WebSearch aggregation, consistently above 4.75% all week) continues correctly blocking new core adds into NVDA/VTI/VXUS. No change to the standing read that a rate spike and an oil spike sharing the same root cause (the same war) removes the usual "flight to safety compresses rates" offset.

## 6. Recession stress test

Illustrative drawdown under a moderate US recession scenario (equity multiples compress ~20-25%, credit spreads widen, oil demand softens, safe-haven flows into duration) — methodology unchanged from prior reports:

| Position | Estimated drawdown | Rationale |
|---|---|---|
| NVDA | -35% to -45% | High-beta growth name, capex-cycle-dependent, still mildly overvalued per MS's DCF |
| VTI | -25% to -30% | Broad market beta, tech-tilted |
| VXUS | -20% to -25% | Somewhat more defensive/value-tilted, not immune |
| OMCL | -25% to -35% | Small/mid-cap, higher beta to risk-off flows; already at -31.16% with effectively no cushion left to give |
| XLE | -15% to -30%, wide range | Two-sided: demand-driven recession is bearish oil, but a recession co-occurring with a live Hormuz shock could see XLE hold up or rally. This run's partial re-decoupling modestly supports the upper (defensive) end of this range vs. this morning's more skeptical framing, but two data points don't yet resolve the question either way |
| GEHC | -15% to -25% | Healthcare equipment/services demand is comparatively inelastic, but the Patient Care Solutions segment under strategic review is itself running double-digit revenue declines and negative margins — a genuine internal drag on the range |

**Blended portfolio estimate: roughly -25% to -30% equity drawdown** in a moderate recession, unchanged from this morning. Still model-based, never empirically tested against this book's own history.

## 7. Liquidity risk by holding

| Holding | Liquidity rating | Basis |
|---|---|---|
| NVDA | 🟢 Very high | Mega-cap, among the most liquid single names on US markets |
| VTI | 🟢 Very high | Massive AUM ETF, tight spreads |
| VXUS | 🟢 Very high | Massive AUM ETF, tight spreads |
| XLE | 🟢 High | Large sector ETF, liquid even in a volatile oil tape |
| GEHC | 🟡 Moderate | Large-cap 2023 spinoff, shorter trading history, thinner average volume than the mega-caps/ETFs |
| OMCL | 🟡 Moderate | Small/mid-cap healthcare IT, lower average daily volume, this book's least liquid holding |

At this book's dollar sizes ($2-14 per position), liquidity risk in the practical execution sense is essentially zero for any holding — this rating reflects institutional-scale characteristics for completeness, not a near-term execution constraint at these sizes.

## 8. Single stock risk and position sizing

- **OMCL (7.85% equity / 6.90% pool):** New worst-ever mark, -31.16% vs. cost, deepening again this run (was -30.52% at 10:41 ET). Half-size entry sizing has correctly limited the dollar damage to ~$1.55 unrealized loss on a ~$5 cost basis — this is sizing discipline working as intended, not a reason to feel comfortable about the trend line. The DCA gate is governed by a **negative** accumulated-profit base (the whole pool is underwater) — mechanically further from firing than at any prior reading, exactly the "don't add capital you haven't earned" design working as intended on a drawdown, not a flaw. **Plainly stated for the record: this is now this book's largest percentage loss on any position ever held, and it keeps getting larger. No trim is recommended — no structural break has been identified by any desk and the position is already half-sized — but this desk will not describe a -31% mark as "fine" simply because the gate mechanism is behaving correctly.**
- **GEHC (5.33% equity / 4.69% pool):** Rule 6's cross-vetting gate is already fully cleared (this morning's MS +10.8% DCF / BW no-disqualifier stress test) and this desk still does not recommend for or against sizing — that call sits with the trader per the contingency plan's own rule 4, and GEHC is already at BR's ~4% pool target. No new information this run changes that.
- **NVDA (12.34% equity / 10.85% pool):** At/near BR's ~11% pool target, well below the single-name 18-20% concentration trigger. MS's DCF gap (~5.8% overvalued as of this morning) still argues against any discretionary add even setting aside rule 6a's pause.
- **XLE (12.88% equity / 11.33% pool):** Correctly sized as the designated hedge. This run's partial loss-paring (-1.26%→-0.30%) is the most encouraging single data point in today's book — still not a clean decoupling, still overvalued per MS's model, so no sizing change recommended in either direction.
- **VTI/VXUS (61.61% combined):** Core sleeve, appropriately the largest allocation; both remain modestly underweight BR's targets from the 9/3 GEHC-funding trim, held in place by rule 6a's pause.

No position in this book is currently oversized relative to its own stated risk tolerance or BR's targets. The risk this run is concentrated in *trend*, not *sizing* — OMCL and the pool overall are getting worse intraday even though nothing is mis-sized.

## 9. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-4 weeks) | Portfolio impact |
|---|---|---|
| The pool's intraday loss trend continues to widen through the close (i.e., today ends materially worse than the -0.27% currently marked) | ~35-40% given the pattern of deepening losses across three checks today | Would be this book's worst single-day mark-to-market close on record; no position-level action implied by price alone (rule 1) but worth tracking explicitly |
| XLE's partial re-decoupling this run reverses and the hedge fails a third straight session | ~30-35% (down slightly from this morning's 25-30% given the partial improvement just observed, but not resolved) | Removes this book's only tested diversifier against its largest live geopolitical risk factor |
| Hormuz settles into a new, more dangerous "managed" state (sporadic strikes continue, no further escalation in kind) | ~35-40%, unchanged | XLE's outperformance becomes less reliable; rest of book grinds sideways-to-down |
| Hormuz escalates further still (a strait-closure attempt, a mass-casualty incident, a confirmed direct hit on a Western-flagged or US military vessel) | ~30-35%, unchanged | Broad book risk-off deepens further |
| GEHC's PCS strategic review formally launches a sale process in the coming weeks | ~30-40% given the company's own stated intent to review options | Neutral-to-modestly-positive if executed well; real near-term headline/execution risk in the interim |
| VIX continues climbing toward genuine stress territory (20+) | ~15-20% given today's flat-but-elevated 16.46 read | Would be this book's first live test of a genuine broad equity-vol spike |
| A genuine US recession signal (a real GDP contraction print, not just soft data) emerges | <5% in the next month | Low near-term probability but the largest-magnitude tail event this book has never priced a real instance of |

These are directional estimates from qualitative synthesis of GS/MS/JPM's reporting plus fresh WebSearch, not a quantitative model.

## 10. Hedging strategies for the top 3 risks (equities-only toolbox — no options)

1. **Deepening intraday pool loss, concentrated in OMCL:** No equities-only lever exists to hedge a small-cap value name's idiosyncratic drawdown beyond the half-size entry discipline already applied. Recommendation: no trim (no structural break), no add (DCA gate mechanically closed by the negative profit base) — hold and let the pre-committed gate design do its job, while continuing to say plainly that the trend is bad.
2. **Hormuz/oil escalation and hedge-decoupling risk:** Unchanged recommendation — XLE is the hedge, sized appropriately, not cheap enough to add to per MS's model. This run's partial loss-paring is encouraging but one data point; do not treat it as confirmation the decoupling risk flagged this morning has resolved.
3. **Look-through AI/mega-cap-tech concentration (~29.66% of equity):** Unchanged recommendation — the only lever is diversifying the core sleeve itself or trimming NVDA specifically; this desk continues to view this as a structural, largely un-hedgeable feature of a broad-market-plus-NVDA book rather than something to eliminate today.

## 11. Rebalancing suggestions

| Holding | Current % of pool | BR's target | Drift | Suggested action |
|---|---|---|---|---|
| NVDA | 10.85% | ~11% | -0.15pp | None — essentially at target |
| VTI | 27.46% | ~30% | -2.54pp | Mechanical underweight from the 9/3 GEHC funding trim; no urgent correction, rule 6a's pause governs timing |
| VXUS | 26.74% | ~30% (combined w/ VTI framework) | -3.26pp | Same as VTI — no action, rule 6a governs timing |
| OMCL | 6.90% | ~7-8% | Roughly at target given the DCA gate hasn't fired | None on sizing — see §8 for the plain read on the trend |
| XLE | 11.33% | ~11% (satellite/hedge slot) | ~flat | None — hold, no add at current valuation; this run's partial decoupling recovery is worth watching, not acting on |
| GEHC | 4.69% | ~4% | +0.69pp | None on sizing — rule 6's gate is already fully cleared but this desk does not recommend a specific add/no-add call; that sits with the trader |
| Cash | 12.03% of pool | ~10% floor | +2.03pp above floor | Defended cleanly; no forced deployment recommended |

No rebalancing trade is recommended this run. Nothing here crosses a pre-committed trigger; this is a status update on an intraday trend, not a decision point.

---

**Stance note (unchanged):** this desk exists to say the uncomfortable thing plainly. Today's uncomfortable thing, stated without softening: the pool's mark-to-market loss roughly quadrupled in four hours and OMCL just marked its worst-ever loss for the second time today — that is a real, ongoing deterioration, not noise, even though no single trigger fired and no trade is being recommended. The offsetting, equally-plain fact: XLE clawed back most of its loss this run, the first sign today that this book's hedge hasn't permanently stopped working. Both deserve to be stated exactly as they are, not rounded toward whichever story is more comfortable.

Sources:
- [US 10 Year Treasury Note Yield - Trading Economics](https://tradingeconomics.com/united-states/government-bond-yield)
- ['Fear gauge' VIX attracts hedges in historically volatile season - CNBC](https://www.cnbc.com/2026/09/10/fear-gauge-vix-hedges-volatility-stocks.html)
- [US strikes five Iranian oil tankers, as Iran attacks 10 ships, Jordan base - Al Jazeera](https://www.aljazeera.com/news/2026/9/9/us-destroys-five-iranian-tankers-iran-retaliates-with-attacks-on-jordan-base)
- [GE HealthCare stock heads into the open after a September 9 slide - ad-hoc-news.de](https://www.ad-hoc-news.de/boerse/news/corporate-news/ge-healthcare-stock-heads-into-the-open-after-a-september-9-slide/70079297)
- Internal: trading-experiment/state.md (09:38-11:37 ET), analysts/ms-dcf-valuation.md (9/10 ~10:16 ET), analysts/gs-stock-screener.md (9/10 ~12:41 ET), analysts/br-portfolio-builder.md (9/9 ~16:14 ET), analysts/jpm-earnings-analyzer.md (9/10)
